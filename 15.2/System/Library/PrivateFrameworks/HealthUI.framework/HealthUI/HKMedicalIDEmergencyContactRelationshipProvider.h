@class NSArray;

@interface HKMedicalIDEmergencyContactRelationshipProvider : NSObject {
    NSArray *_tokens;
}

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfRowsForRelationships;
- (id)keyForRelationshipAtIndex:(long long)a0;
- (id)localizedRelationshipAtIndex:(long long)a0;

@end
