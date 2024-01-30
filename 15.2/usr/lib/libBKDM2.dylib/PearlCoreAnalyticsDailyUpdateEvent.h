@class NSNumber, NSDate;

@interface PearlCoreAnalyticsDailyUpdateEvent : PearlCoreAnalyticsEvent

@property (retain) NSDate *yogiErrorDate;
@property (retain) NSNumber *totalMatchAttempts;
@property (retain) NSNumber *totalMatchAttemptsSuccessful;
@property (retain) NSNumber *totalMatchAttemptsFailed;
@property (retain) NSNumber *totalMatchAttemptsFaceDetected;
@property (retain) NSNumber *totalMatchAttemptsFaceDetectedSuccessful;
@property (retain) NSNumber *totalMatchAttemptsFaceDetectedFailed;
@property (retain) NSNumber *totalMatchAttemptsFaceDetectedNoGlasses;
@property (retain) NSNumber *totalMatchAttemptsFaceDetectedSuccessfulNoGlasses;
@property (retain) NSNumber *totalMatchAttemptsFaceDetectedFailedNoGlasses;
@property (retain) NSNumber *totalMatchAttemptsFaceDetectedWithGlasses;
@property (retain) NSNumber *totalMatchAttemptsFaceDetectedSuccessfulWithGlasses;
@property (retain) NSNumber *totalMatchAttemptsFaceDetectedFailedWithGlasses;
@property (retain) NSNumber *matchAttemptsType0;
@property (retain) NSNumber *matchAttemptsSuccessfulType0;
@property (retain) NSNumber *matchAttemptsFailedType0;
@property (retain) NSNumber *matchAttemptsFaceDetectedType0;
@property (retain) NSNumber *matchAttemptsFaceDetectedSuccessfulType0;
@property (retain) NSNumber *matchAttemptsFaceDetectedFailedType0;
@property (retain) NSNumber *matchAttemptsFaceDetectedType0NoGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedSuccessfulType0NoGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedFailedType0NoGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedType0WithGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedSuccessfulType0WithGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedFailedType0WithGlasses;
@property (retain) NSNumber *matchAttemptsType1;
@property (retain) NSNumber *matchAttemptsSuccessfulType1;
@property (retain) NSNumber *matchAttemptsFailedType1;
@property (retain) NSNumber *matchAttemptsFaceDetectedType1;
@property (retain) NSNumber *matchAttemptsFaceDetectedSuccessfulType1;
@property (retain) NSNumber *matchAttemptsFaceDetectedFailedType1;
@property (retain) NSNumber *matchAttemptsFaceDetectedType1NoGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedSuccessfulType1NoGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedFailedType1NoGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedType1WithGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedSuccessfulType1WithGlasses;
@property (retain) NSNumber *matchAttemptsFaceDetectedFailedType1WithGlasses;
@property (retain) NSNumber *totalFRR;
@property (retain) NSNumber *totalFaceDetectedFRR;
@property (retain) NSNumber *type0FRR;
@property (retain) NSNumber *type0FaceDetectedFRR;
@property (retain) NSNumber *type0FaceDetectedNoGlassesFRR;
@property (retain) NSNumber *type0FaceDetectedWithGlassesFRR;
@property (retain) NSNumber *type1FRR;
@property (retain) NSNumber *type1FaceDetectedFRR;
@property (retain) NSNumber *type1FaceDetectedNoGlassesFRR;
@property (retain) NSNumber *type1FaceDetectedWithGlassesFRR;
@property (retain) NSNumber *enrolledTemplateCountType0NoGlasses;
@property (retain) NSNumber *enrolledTemplateCountType0WithGlasses;
@property (retain) NSNumber *enrolledTemplateCountType0Unknown;
@property (retain) NSNumber *enrolledTemplateCountType1NoGlasses;
@property (retain) NSNumber *enrolledTemplateCountType1WithGlasses;
@property (retain) NSNumber *enrolledTemplateCountType1Unknown;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)reset;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (id)dictionaryRepresentationArchiving:(BOOL)a0;
- (BOOL)postEvent;
- (id)initWithPersistedData;
- (void)updateDailyMatchValues:(struct { int x0; char x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned char x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; unsigned long long x10; unsigned char x11; BOOL x12; struct { unsigned int x0; unsigned int x1; unsigned int x2; } x13; struct { BOOL x0; BOOL x1; int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; } x14; unsigned long long x15; short x16; BOOL x17; struct { unsigned int x0; unsigned int x1; unsigned int x2; } x18; struct { BOOL x0; BOOL x1; int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; } x19; unsigned long long x20; short x21; struct { unsigned int x0; unsigned int x1; unsigned int x2; } x22; struct { BOOL x0; BOOL x1; int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; } x23; unsigned char x24; unsigned char x25; BOOL x26; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned int x5; union { struct { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; } x0; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; } x1; unsigned char x2; unsigned char x3; unsigned char x4; int x5; int x6; unsigned char x7; } x0; struct { int x0[3][3]; unsigned char x1; unsigned char x2; } x1; } x6; } x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; BOOL x33; BOOL x34; unsigned char x35; BOOL x36; BOOL x37; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x38; BOOL x39; char x40[17]; BOOL x41; struct { unsigned int x0; int x1; int x2; int x3; BOOL x4; } x42; unsigned char x43; unsigned long long x44; unsigned char x45; BOOL x46; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; } x47; } *)a0;
- (void)calculateDailyValues;

@end
