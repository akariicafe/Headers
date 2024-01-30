@class NSString, NSObject;
@protocol OS_os_log;

@interface EAEmailAddressParser : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stringByEncodingIDNAString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)localPartFromAddress:(id)a0;
+ (void)_componentsForFullAddress:(id)a0 rawAddressIndexes:(id *)a1 localPartIndexes:(id *)a2 domainIndexes:(id *)a3;
+ (id)rawAddressFromFullAddress:(id)a0;
+ (id)rawAddressFromFullAddress:(id)a0 cacheResults:(BOOL)a1;
+ (void)insertPreviousRoute:(unsigned short *)a0 ofLength:(unsigned long long)a1 toBuffer:(unsigned short **)a2 ofLength:(unsigned long long)a3 atPosition:(unsigned short *)a4 addSpace:(BOOL)a5;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)a0;
+ (id)idnaEncodedAddressForAddress:(id)a0;
+ (id)_stringByDecodingIDNAString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)isLegalEmailAddress:(id)a0;
+ (id)displayNameFromAddress:(id)a0;
+ (id)addressDomainFromAddress:(id)a0;
+ (BOOL)addressIsEmptyGroup:(id)a0;
+ (id)displayNameFromAddress:(id)a0 cacheResults:(BOOL)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfAddressDomainFromAddress:(id)a0;
+ (id)idnaDecodedAddressForAddress:(id)a0;


@end
