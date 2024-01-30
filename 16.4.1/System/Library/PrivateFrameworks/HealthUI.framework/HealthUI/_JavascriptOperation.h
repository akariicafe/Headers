@class NSString;

@interface _JavascriptOperation : NSObject

@property (retain, nonatomic) NSString *javascript;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithJavascript:(id)a0 completion:(id /* block */)a1;
- (void)submitJavascript:(id)a0 finishBlock:(id /* block */)a1;

@end
