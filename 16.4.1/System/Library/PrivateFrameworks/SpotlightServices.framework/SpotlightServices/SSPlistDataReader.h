@class NSArray, NSMutableArray;

@interface SSPlistDataReader : NSObject {
    struct _MDPlistContainer { } *_container;
    struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } _obj;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSMutableArray *allKeys;
@property (readonly, nonatomic) NSArray *blocklist;

- (BOOL)doesBundleExistInAppAllowList:(id)a0;
- (struct _MDPlistContainer { } *)container;
- (id)initWithPlistContainer:(struct _MDPlistContainer { } *)a0 obj:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a1;
- (id)initWithPlistContainer:(struct _MDPlistContainer { } *)a0;
- (void)dealloc;
- (double)doubleValueForBundle:(id)a0;
- (double)doubleValueForKey:(const char *)a0;
- (id)description;

@end
