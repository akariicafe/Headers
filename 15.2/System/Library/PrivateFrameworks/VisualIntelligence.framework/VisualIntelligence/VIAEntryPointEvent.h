@class NSString;

@interface VIAEntryPointEvent : NSObject <VIAEvent>

@property (nonatomic) unsigned long long queryID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *originatingApplication;
@property (readonly, nonatomic) BOOL shouldWaitUntilEntryPointStarts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feedback;
- (void).cxx_destruct;

@end
