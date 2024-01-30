@interface ICSidecarInsertMenu : NSObject {
    void /* unknown type, empty encoding */ services;
    void /* unknown type, empty encoding */ menuDidChange;
    void /* unknown type, empty encoding */ activeService;
    void /* unknown type, empty encoding */ requestDidFinishObservation;
    void /* unknown type, empty encoding */ didReceiveItems;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ presentingViewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentingSourceView;
@property (nonatomic) void /* unknown type, empty encoding */ presentingSourceRect;
@property (nonatomic, copy) id /* block */ menuDidChange;
@property (nonatomic, retain) void /* unknown type, empty encoding */ activeRequest;
@property (nonatomic, copy) id /* block */ didReceiveItems;

- (id)menu;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sidecarDevicesDidChange:(id)a0;

@end
