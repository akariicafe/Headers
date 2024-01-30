@class NSString;

@interface GPBEnumDescriptor : NSObject {
    const char *valueNames_;
    const int *values_;
    const char *extraTextFormatInfo_;
    unsigned int *nameOffsets_;
    unsigned int valueCount_;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) void /* function */ *enumVerifier;
@property (readonly, nonatomic) unsigned int enumNameCount;

+ (id)allocDescriptorForName:(id)a0 valueNames:(const char *)a1 values:(const int *)a2 count:(unsigned int)a3 enumVerifier:(void /* function */ *)a4 extraTextFormatInfo:(const char *)a5;
+ (id)allocDescriptorForName:(id)a0 valueNames:(const char *)a1 values:(const int *)a2 count:(unsigned int)a3 enumVerifier:(void /* function */ *)a4;

- (void)calcValueNameOffsets;
- (id)enumNameForValue:(int)a0;
- (BOOL)getValue:(int *)a0 forEnumTextFormatName:(id)a1;
- (id)getEnumTextFormatNameForIndex:(unsigned int)a0;
- (id)getEnumNameForIndex:(unsigned int)a0;
- (BOOL)getValue:(int *)a0 forEnumName:(id)a1;
- (id)textFormatNameForValue:(int)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 valueNames:(const char *)a1 values:(const int *)a2 count:(unsigned int)a3 enumVerifier:(void /* function */ *)a4;

@end
