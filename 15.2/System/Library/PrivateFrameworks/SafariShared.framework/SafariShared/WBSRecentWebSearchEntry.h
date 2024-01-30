@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject

@property (readonly) NSString *searchString;
@property (readonly) NSDate *date;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSearchString:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithSearchString:(id)a0 date:(id)a1;

@end
