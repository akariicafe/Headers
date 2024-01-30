@class NSDateFormatter;

@interface WBSAccountManagerDateFormatter : NSObject

@property (class, readonly, nonatomic) NSDateFormatter *dateFormatterWithDynamicContext;
@property (class, readonly, nonatomic) NSDateFormatter *dateFormatterWithStandaloneContext;

@end
