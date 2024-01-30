@class NSData;

@interface MFMessageDataContainer : NSObject {
    NSData *_data;
    BOOL _partial;
    BOOL _incomplete;
}

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 partial:(BOOL)a1 incomplete:(BOOL)a2;

@end
