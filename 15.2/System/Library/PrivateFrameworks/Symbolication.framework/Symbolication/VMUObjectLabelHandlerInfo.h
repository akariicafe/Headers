@class NSString;

@interface VMUObjectLabelHandlerInfo : NSObject {
    NSString *_className;
    Class _localClass;
    SEL _handlerSelector;
}

- (void).cxx_destruct;

@end
