@class NSMutableDictionary, NSDate;

@interface MBDebugContext : NSObject {
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) long long time;
@property (retain, nonatomic) NSDate *simulatedDate;

+ (id)defaultDebugContext;

- (BOOL)isFlagSet:(id)a0;
- (id)init;
- (BOOL)eval:(id)a0;
- (id)valueForName:(id)a0;
- (BOOL)boolForName:(id)a0;
- (void)dealloc;
- (void)setValue:(id)a0 forName:(id)a1;
- (void)removeValueForName:(id)a0;
- (void)setBool:(BOOL)a0 forName:(id)a1;
- (void)setInt:(int)a0 forName:(id)a1;
- (void)setDelegate:(id)a0 andSelector:(SEL)a1 forName:(id)a2;
- (id)performSelectorForName:(id)a0;
- (id)performSelectorForName:(id)a0 withObject:(id)a1;
- (id)description;
- (void)setFlag:(id)a0;
- (int)intForName:(id)a0;

@end
