@class NSString, NMSKeepLocalRequestOptions;

@interface NMUKeepLocalAlertAction : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldPerformKeepLocalRequest;
@property (retain, nonatomic) NMSKeepLocalRequestOptions *keepLocalRequestOptions;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) unsigned long long downloadAction;

+ (id)actionWithTitle:(id)a0 shouldPerformKeepLocalRequest:(BOOL)a1 keepLocalRequestOptions:(id)a2 downloadAction:(unsigned long long)a3;

- (void).cxx_destruct;

@end
