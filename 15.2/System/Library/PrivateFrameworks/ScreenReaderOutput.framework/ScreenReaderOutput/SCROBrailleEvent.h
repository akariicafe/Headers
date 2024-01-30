@interface SCROBrailleEvent : NSObject {
    int _type;
    id _data;
    id _data2;
    id _data3;
}

@property (readonly, nonatomic) int type;
@property (nonatomic) BOOL shouldDisplay;

+ (id)eventWithType:(int)a0 data:(id)a1 data2:(id)a2 data3:(id)a3;
+ (id)eventWithType:(int)a0 data:(id)a1;

- (id)data2;
- (id)data3;
- (id)description;
- (void).cxx_destruct;
- (id)data;
- (id)initWithType:(int)a0 data:(id)a1 data2:(id)a2 data3:(id)a3;

@end
