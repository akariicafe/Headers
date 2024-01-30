@class NSString, NSArray, _AUStaticParameterInfo;

@interface AUParameter : AUParameterNode <NSSecureCoding> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _localValueStale;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } _numUIObservers;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } _numRecordingObservers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long address;
@property (retain, nonatomic) _AUStaticParameterInfo *info;
@property (readonly, nonatomic) float minValue;
@property (readonly, nonatomic) float maxValue;
@property (readonly, nonatomic) unsigned int unit;
@property (readonly, copy, nonatomic) NSString *unitName;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSArray *valueStrings;
@property (readonly, copy, nonatomic) NSArray *dependentParameters;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (unsigned int)_clumpID;
- (id)copyNodeWithOffset:(unsigned long long)a0;
- (void)_observersChanged:(BOOL)a0 deltaCount:(int)a1;
- (void)setValue:(float)a0 extOriginator:(struct AUParameterObserverExtendedToken { unsigned long long x0; })a1 atHostTime:(unsigned long long)a2 eventType:(unsigned int)a3;
- (void)setValue:(float)a0 originator:(void *)a1;
- (unsigned int)_originalOrder;
- (BOOL)localValueStale;
- (void)setLocalValueStale:(BOOL)a0;
- (float)_internalValue;
- (id)stringFromValue:(const float *)a0;
- (id)initWithID:(id)a0 name:(id)a1 address:(unsigned long long)a2 min:(float)a3 max:(float)a4 unit:(unsigned int)a5 unitName:(id)a6 flags:(unsigned int)a7 valueStrings:(id)a8 dependentParameters:(id)a9;
- (void)setValue:(float)a0 originator:(void *)a1 atHostTime:(unsigned long long)a2;
- (void)setValue:(float)a0 originator:(void *)a1 atHostTime:(unsigned long long)a2 eventType:(unsigned int)a3;
- (float)valueFromString:(id)a0;
- (void)set_clumpID:(unsigned int)a0;
- (void)set_defaultValue:(float)a0;
- (void)set_originalOrder:(unsigned int)a0;
- (void)dealloc;
- (float)_defaultValue;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
