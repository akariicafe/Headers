@class CDPContext;
@protocol CDPSecureChannelProxy, CDPDCircleProxy, CDPKeychainCircleProxy;

@interface CDPDSecureChannelContext : NSObject {
    CDPContext *_context;
}

@property (retain, nonatomic) id<CDPKeychainCircleProxy> keychainCircleProxy;
@property (retain, nonatomic) id<CDPSecureChannelProxy> secureChannelProxy;
@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)initialize:(id *)a0;
- (id)initWithContext:(id)a0 circleProxy:(id)a1;
- (id)initWithChannel:(id)a0 dataProvider:(id)a1 circleProxy:(id)a2;

@end
