@class NSString;

@interface SYDegenerateChange : NSObject <SYChange>

@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)degenerateChange;
+ (BOOL)isDegenerate:(id)a0;


@end
