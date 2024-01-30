@class NSString, NSDate;

@interface _PLDeferredLogFormattedEntry : NSObject

@property (nonatomic) long long context;
@property (retain, nonatomic) NSString *logType;
@property (retain, nonatomic) NSString *entityDescription;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long objectPointer;

- (void).cxx_destruct;

@end
