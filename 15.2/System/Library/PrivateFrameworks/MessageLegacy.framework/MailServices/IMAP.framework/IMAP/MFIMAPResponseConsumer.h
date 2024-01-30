@class NSMutableDictionary;

@interface MFIMAPResponseConsumer : NSObject {
    NSMutableDictionary *_consumersBySection;
}

- (void)done;
- (void)dealloc;
- (void)addConsumer:(id)a0 forSection:(id)a1;
- (void)appendData:(id)a0 forSection:(id)a1;
- (id)consumersBySection;

@end
