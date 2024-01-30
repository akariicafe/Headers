@class NSString, UIViewController, NSMutableArray;

@interface CDPRemoteValidationEscapeOffer : NSObject {
    NSMutableArray *_escapeOptions;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) NSString *escapeOfferName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)init;
- (void)handleEscapeAction:(id)a0;
- (void)addEscapeOptionsObject:(id)a0;
- (id)escapeOptions;
- (id)_actionFromEscapeOption:(id)a0;
- (long long)_styleForEscapeOption:(id)a0;
- (void)dismissOfferAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
