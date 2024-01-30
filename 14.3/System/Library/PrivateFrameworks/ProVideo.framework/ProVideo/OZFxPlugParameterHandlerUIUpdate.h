@interface OZFxPlugParameterHandlerUIUpdate : NSObject {
    int _paramID;
    unsigned int _notificationFlags;
}

+ (id)updateWithParamID:(int)a0 notificationFlags:(unsigned int)a1;

- (int)paramID;
- (unsigned int)notificationFlags;

@end
