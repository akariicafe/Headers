@class MutableFloatArray;

@interface MutableFloatMatrix : NSObject {
    MutableFloatArray *_floatArray;
}

@property (nonatomic) unsigned long long rowCount;
@property (nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) const float *floats;
@property (readonly, nonatomic) float *mutableFloats;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)setFloat:(float)a0 atRow:(unsigned long long)a1 column:(unsigned long long)a2;
- (float)floatAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (id)initWithRowCount:(unsigned long long)a0 columnCount:(unsigned long long)a1;
- (id)initWithRowCount:(unsigned long long)a0 columnCount:(unsigned long long)a1 valueBlock:(id /* block */)a2;
- (void)setFloat:(float)a0 forRow:(unsigned long long)a1;
- (void)setFloat:(float)a0 forColumn:(unsigned long long)a1;
- (void)argMinRow:(unsigned long long *)a0 column:(unsigned long long *)a1;

@end
