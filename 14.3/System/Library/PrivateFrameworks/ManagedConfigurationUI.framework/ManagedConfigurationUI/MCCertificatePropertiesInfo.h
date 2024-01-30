@class NSArray;

@interface MCCertificatePropertiesInfo : NSObject

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSArray *keyValueSections;

- (void).cxx_destruct;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void)_setup:(id)a0;
- (id)initWithCertificateProperties:(id)a0;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust { } *)a0;
- (id)_sectionsFromProperties:(id)a0;
- (id)_sendablePropertiesFromProperties:(id)a0;
- (id)_cellInfosForSection:(id)a0;
- (id)_sectionInfoForCertSection:(id)a0 title:(id)a1;
- (id)_sendablePropertyFromProperty:(id)a0;
- (id)_copyPropertiesFromTrust:(struct __SecTrust { } *)a0;

@end
