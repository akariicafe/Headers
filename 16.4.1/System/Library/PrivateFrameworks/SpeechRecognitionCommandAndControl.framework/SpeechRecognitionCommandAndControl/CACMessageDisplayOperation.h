@class NSString;

@interface CACMessageDisplayOperation : NSOperation

@property BOOL ignore;
@property (retain) NSString *message;
@property long long type;

- (void)main;
- (void).cxx_destruct;
- (id)initWithMessageString:(id)a0 type:(long long)a1;

@end
