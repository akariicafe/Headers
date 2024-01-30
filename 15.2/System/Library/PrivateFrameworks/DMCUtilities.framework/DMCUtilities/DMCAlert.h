@class NSString;

@interface DMCAlert : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *defaultButtonText;
@property (retain, nonatomic) NSString *alternateButtonText;
@property (retain, nonatomic) NSString *otherButtonText;
@property (nonatomic) BOOL displayOnLockScreen;
@property (nonatomic) BOOL dismissOnLock;
@property (nonatomic) double dismissAfterTimeInterval;
@property (retain, nonatomic) id notification;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSString *summary;

- (void).cxx_destruct;
- (id)notificationParametersOutFlags:(unsigned long long *)a0;

@end
