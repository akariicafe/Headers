@class NSString, NSObject;
@protocol OS_nw_txt_record;

@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor> {
    char *name;
    char *type;
    char *domain;
    NSObject<OS_nw_txt_record> *txt_record;
    unsigned char no_auto_rename : 1;
    unsigned char __pad_bits : 7;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
