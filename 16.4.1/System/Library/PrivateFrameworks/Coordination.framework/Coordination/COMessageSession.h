@class NSString, COClusterMember;

@interface COMessageSession : NSObject

@property (nonatomic) BOOL didUseRequest;
@property (nonatomic) BOOL didUseResponse;
@property (nonatomic) BOOL didUseNotice;
@property (nonatomic) unsigned long long startTime;
@property (readonly, retain, nonatomic) COClusterMember *member;
@property (readonly, copy, nonatomic) NSString *subTopic;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)stopWithNotice:(id)a0;
- (id)initWithMember:(id)a0;
- (id)messageChannel;

@end
