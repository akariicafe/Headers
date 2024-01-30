@class NSString, NSArray;

@interface _RESectionDescriptor : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL invertRanking;
@property (nonatomic) long long maxElementCount;
@property (copy, nonatomic) NSArray *rules;
@property (readonly, nonatomic) BOOL allowsSubsections;

- (void).cxx_destruct;
- (id)initWithHistoricSectionDescriptor:(id)a0;
- (id)initWithSectionDescriptor:(id)a0;

@end
