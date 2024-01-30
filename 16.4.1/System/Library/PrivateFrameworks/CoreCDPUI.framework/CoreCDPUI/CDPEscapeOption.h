@class NSString;

@interface CDPEscapeOption : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ escapeAction;
@property (copy, nonatomic) id /* block */ canShowEscapeOption;
@property (copy, nonatomic) NSString *progressTitle;
@property (copy, nonatomic) NSString *progressLabel;

+ (id)cancelOption;

- (void).cxx_destruct;

@end
