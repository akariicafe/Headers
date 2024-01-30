@class NSArray;

@interface HKMedicalIDEmergencyContactRelationshipProvider : NSObject {
    NSArray *_tokens;
}

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfRowsForRelationships;
- (id)keyForRelationshipAtIndex:(long long)a0;
- (id)localizedRelationshipAtIndex:(long long)a0;

@end
