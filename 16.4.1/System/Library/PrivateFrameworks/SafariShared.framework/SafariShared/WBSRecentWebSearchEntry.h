@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject

@property (readonly) NSString *searchString;
@property (readonly) NSDate *date;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithSearchString:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0 date:(id)a1;

@end
