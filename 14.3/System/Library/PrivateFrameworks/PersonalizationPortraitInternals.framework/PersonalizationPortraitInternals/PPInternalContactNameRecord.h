@class PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord {
    PPPBContactNameRecord *_pbRecord;
}

- (id)organizationName;
- (id)cityNames;
- (id)relatedNames;
- (id)sourceIdentifier;
- (id)phoneticMiddleName;
- (id)firstName;
- (id)lastName;
- (id)phoneticFirstName;
- (id)jobTitle;
- (id)streetNames;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)score;
- (void)setScore:(double)a0;
- (id)phoneticLastName;
- (id)nickname;
- (id)middleName;
- (unsigned char)changeType;
- (id)initWithPBContactNameRecord:(id)a0;
- (unsigned char)source;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)clientCopy;
- (id)pbRecord;
- (id)identifier;

@end
