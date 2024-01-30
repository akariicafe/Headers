@class NSString;

@interface NWConcrete_nw_error : NSObject <OS_nw_error> {
    int domain;
    int code;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
