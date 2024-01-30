@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ASDSelectorControl : ASDControl {
    unsigned int _selectedValue;
    NSMutableArray *_values;
    NSObject<OS_dispatch_queue> *_valueQueue;
}

@property (nonatomic) unsigned int selectedValue;
@property (readonly, nonatomic, getter=isSettable) BOOL settable;

- (id)values;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (void)removeValue:(id)a0;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (void)addValue:(id)a0;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (void).cxx_destruct;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)driverClassName;
- (unsigned int)selectedValue;
- (void)setSelectedValue:(unsigned int)a0;
- (BOOL)changeValue:(unsigned int)a0;
- (unsigned int)baseClass;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2;
- (id)initWithElement:(unsigned int)a0 inScope:(unsigned int)a1 withPlugin:(id)a2 andObjectClassID:(unsigned int)a3;
- (id)initWithIsSettable:(BOOL)a0 forElement:(unsigned int)a1 inScope:(unsigned int)a2 withPlugin:(id)a3;
- (id)initWithIsSettable:(BOOL)a0 forElement:(unsigned int)a1 inScope:(unsigned int)a2 withPlugin:(id)a3 andObjectClassID:(unsigned int)a4;
- (id)initWithIsSettable:(BOOL)a0 withPlugin:(id)a1;
- (id)nameForValue:(unsigned int)a0;

@end
