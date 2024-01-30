@class NSMutableSet;

@interface SCNGeometryTessellator : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_clients;
    BOOL _adaptive;
    BOOL _screenSpace;
    float _maximumEdgeLength;
    float _edgeTessellationFactor;
    float _insideTessellationFactor;
    float _tessellationFactorScale;
    long long _smoothingMode;
    unsigned long long _partitionMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double tessellationFactorScale;
@property (nonatomic) unsigned long long tessellationPartitionMode;
@property (nonatomic, getter=isAdaptive) BOOL adaptive;
@property (nonatomic, getter=isScreenSpace) BOOL screenSpace;
@property (nonatomic) double edgeTessellationFactor;
@property (nonatomic) double insideTessellationFactor;
@property (nonatomic) double maximumEdgeLength;
@property (nonatomic) long long smoothingMode;

- (void)removeClient:(id)a0;
- (BOOL)adaptive;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addClient:(id)a0;
- (void)dealloc;
- (void)clientWillDie:(id)a0;
- (void)tessellatorValueDidChangeForClient:(id)a0;
- (struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; })_tessellatorValueForGeometry:(id)a0;
- (void)tessellatorValueDidChange;
- (BOOL)screenSpace;

@end
