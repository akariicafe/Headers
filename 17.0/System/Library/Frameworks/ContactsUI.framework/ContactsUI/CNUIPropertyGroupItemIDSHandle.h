@class NSString, CNUIContactPropertyIDSHandle, CNContactProperty;

@interface CNUIPropertyGroupItemIDSHandle : NSObject <CNUIIDSHandle>

@property (readonly, nonatomic) CNUIContactPropertyIDSHandle *contactPropertyHandle;
@property (readonly, copy, nonatomic) CNContactProperty *contactProperty;
@property (readonly, copy, nonatomic) NSString *_cnui_IDSIDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedGroupItem:(id)a0;
+ (BOOL)supportsPropertyGroupItem:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPropertyGroupItem:(id)a0;

@end
