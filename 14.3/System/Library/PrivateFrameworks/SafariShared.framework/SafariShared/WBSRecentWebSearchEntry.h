@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject

@property (readonly) NSString *searchString;
@property (readonly) NSDate *date;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSearchString:(id)a0 date:(id)a1;
- (id)initWithSearchString:(id)a0;

@end
