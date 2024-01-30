@class NSMutableData;

@interface SidecarMutableItem : SidecarItem {
    NSMutableData *_mutableData;
    unsigned long long _capacity;
    unsigned char _complete : 1;
}

@property (readonly, getter=isComplete) BOOL complete;

- (BOOL)appendData:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)initWithType:(id)a0 capacity:(unsigned long long)a1;

@end
