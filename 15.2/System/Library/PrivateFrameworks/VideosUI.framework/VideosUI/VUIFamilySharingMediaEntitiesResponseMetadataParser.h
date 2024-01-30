@class AMSURLResult;

@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject

@property (retain, nonatomic) AMSURLResult *result;

- (void).cxx_destruct;
- (id)init;
- (id)parseAMSURLResult:(id)a0;
- (id)_parseTotalFromMetaBag;
- (id)_parseOffsetFromMetaBag;

@end
