@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {
    NSDictionary *_suspensionInfoDictionary;
}

@property (readonly, nonatomic, getter=isiCloudSuspended) BOOL iCloudSuspended;
@property (readonly, nonatomic, getter=isFamilySuspended) BOOL familySuspended;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
