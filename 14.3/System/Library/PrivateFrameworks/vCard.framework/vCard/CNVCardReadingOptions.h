@class NSArray;

@interface CNVCardReadingOptions : NSObject

@property (nonatomic) unsigned long long contactLimit;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (nonatomic) unsigned long long maximumValueLength;
@property (nonatomic) BOOL useConcurrentParsing;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
