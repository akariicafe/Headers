@class NSArray;

@interface HKMedicalIDEmergencyContactRelationshipProvider : NSObject {
    NSArray *_tokens;
}

- (id)init;
- (void).cxx_destruct;
- (id)keyForRelationshipAtIndex:(long long)a0;
- (id)localizedRelationshipAtIndex:(long long)a0;
- (long long)numberOfRowsForRelationships;

@end
