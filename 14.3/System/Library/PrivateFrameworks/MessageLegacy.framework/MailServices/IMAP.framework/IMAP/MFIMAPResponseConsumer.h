@class NSMutableDictionary;

@interface MFIMAPResponseConsumer : NSObject {
    NSMutableDictionary *_consumersBySection;
}

- (void)dealloc;
- (void)done;
- (void)addConsumer:(id)a0 forSection:(id)a1;
- (void)appendData:(id)a0 forSection:(id)a1;
- (id)consumersBySection;

@end
