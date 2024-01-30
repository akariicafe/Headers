@class NSUUID, NSString, NSDate;

@interface MapsSyncFakeBaseItem : NSObject <MapsSyncBaseItem>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 createTime:(id)a1;

@end
