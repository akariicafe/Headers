@class NSString, NSArray;

@interface _MTLCommandBufferEncoderInfo : NSObject <MTLCommandBufferEncoderInfo>

@property (nonatomic) unsigned long long uniqueID;
@property (nonatomic) unsigned long long globalTraceObjectID;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSArray *debugSignposts;
@property (nonatomic) long long errorState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
