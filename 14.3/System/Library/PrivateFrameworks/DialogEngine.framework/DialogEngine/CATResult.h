@class NSString, NSDictionary, NSArray;

@interface CATResult : NSObject

@property (retain, nonatomic) NSString *catId;
@property (retain, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSArray *speak;
@property (retain, nonatomic) NSArray *print;
@property (retain, nonatomic) NSArray *dialogId;
@property (retain, nonatomic) NSArray *captionSpeak;
@property (retain, nonatomic) NSArray *captionPrint;
@property (retain, nonatomic) NSArray *printOnly;
@property (retain, nonatomic) NSArray *spokenOnly;

- (void).cxx_destruct;

@end
