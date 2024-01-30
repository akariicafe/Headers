@class AMSURLResult;

@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject

@property (retain, nonatomic) AMSURLResult *result;

- (id)init;
- (void).cxx_destruct;
- (id)parseAMSURLResult:(id)a0;
- (id)_parseTotalFromMetaBag;
- (id)_parseOffsetFromMetaBag;

@end
