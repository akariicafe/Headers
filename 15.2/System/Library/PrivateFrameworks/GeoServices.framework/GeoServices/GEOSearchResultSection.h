@class NSString, GEOStyleAttributes;

@interface GEOSearchResultSection : NSObject <GEOSearchResultSection>

@property (nonatomic) long long cellType;
@property (copy, nonatomic) NSString *headerDisplayName;
@property (copy, nonatomic) NSString *subHeaderDisplayName;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSearchResultSection:(id)a0;

@end
