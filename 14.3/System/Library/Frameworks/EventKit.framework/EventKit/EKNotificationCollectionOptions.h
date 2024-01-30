@class EKSource, NSString;

@interface EKNotificationCollectionOptions : NSObject

@property (readonly, nonatomic) EKSource *source;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *externalIDTag;

- (void).cxx_destruct;
- (id)initWithExternalID:(id)a0 externalIDTag:(id)a1 inSource:(id)a2;
- (id)description;

@end
