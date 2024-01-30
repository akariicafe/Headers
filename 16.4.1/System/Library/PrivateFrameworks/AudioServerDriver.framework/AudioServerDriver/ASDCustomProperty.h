@class ASDObject, ASDPropertyAddress;

@interface ASDCustomProperty : NSObject

@property (weak, nonatomic) ASDObject *owner;
@property (readonly, copy, nonatomic) ASDPropertyAddress *address;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) unsigned int selector;
@property (readonly, nonatomic) unsigned int scope;
@property (readonly, nonatomic) unsigned int element;
@property (readonly, nonatomic) unsigned int propertyDataType;
@property (readonly, nonatomic) unsigned int qualifierDataType;
@property (nonatomic, getter=isSettable) BOOL settable;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)a0 andQualifierData:(const void *)a1;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (id)initWithAddress:(id)a0 propertyDataType:(unsigned int)a1 qualifierDataType:(unsigned int)a2;
- (id)initWithSelector:(unsigned int)a0 propertyDataType:(unsigned int)a1 andQualifierDataType:(unsigned int)a2;
- (id)initWithSelector:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2 propertyDataType:(unsigned int)a3 andQualifierDataType:(unsigned int)a4;
- (void)sendPropertyChangeNotification;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;

@end
