@class NSString, PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord {
    PPPBContactNameRecord *_pbRecord;
    NSString *_localizedFullName;
}

- (id)identifier;
- (id)middleName;
- (id)cityNames;
- (id)nickname;
- (unsigned char)source;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (void)setScore:(double)a0;
- (double)score;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)jobTitle;
- (id)organizationName;
- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)localizedFullName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lastName;
- (id)streetNames;
- (id)clientCopy;
- (id)sourceIdentifier;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)firstName;
- (id)initWithPBContactNameRecord:(id)a0;
- (id)pbRecord;

@end
