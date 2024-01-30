@class NSArray;

@interface GEOPreflight : NSObject

@property (class, readonly, nonatomic) NSArray *queryItems;

+ (id)queryStringForPreflightOptions:(unsigned int)a0;

@end
