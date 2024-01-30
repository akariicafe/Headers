@class NSString, NSDictionary, NSArray;

@interface PPClientContactNameRecord : PPContactNameRecord {
    NSString *_identifier;
    double _score;
    unsigned char _source;
    NSString *_sourceIdentifier;
    unsigned char _changeType;
    NSString *_firstName;
    NSString *_phoneticFirstName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_lastName;
    NSString *_phoneticLastName;
    NSString *_organizationName;
    NSString *_jobTitle;
    NSString *_nickname;
    NSDictionary *_relatedNames;
    NSArray *_streetNames;
    NSArray *_cityNames;
}

- (id)identifier;
- (id)middleName;
- (id)cityNames;
- (id)nickname;
- (unsigned char)source;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (double)score;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)jobTitle;
- (id)organizationName;
- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)lastName;
- (id)streetNames;
- (id)sourceIdentifier;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)firstName;

@end
