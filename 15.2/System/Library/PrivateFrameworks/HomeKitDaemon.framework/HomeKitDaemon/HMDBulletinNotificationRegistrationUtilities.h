@interface HMDBulletinNotificationRegistrationUtilities : HMFObject

+ (id)cameraReachabilityRegistrationFromMKFRegistration:(id)a0;
+ (id)cameraSignificantEventRegistrationFromMKFRegistration:(id)a0;
+ (id)createAndAddLocalConditionsToRegistration:(id)a0 moc:(id)a1 conditions:(id)a2;
+ (id)cameraSignificantEventRegistrationFromLocalRegistration:(id)a0 remoteDeviceIdentifier:(id)a1;
+ (id)createAndAddLocalPresenceConditionToRegistration:(id)a0 moc:(id)a1 condition:(id)a2;
+ (id)createAndAddLocalTimePeriodConditionToRegistration:(id)a0 moc:(id)a1 condition:(id)a2;
+ (id)createLocalElementFromTimeOfDay:(id)a0 moc:(id)a1;
+ (id)createLocalElementFromSunriseSunset:(id)a0 moc:(id)a1;
+ (id)conditionsFromLocalConditions:(id)a0;
+ (id)accessoryRegistrationFromLocalRegistration:(id)a0 remoteDeviceIdentifier:(id)a1;
+ (id)accessoryRegistrationFromMKFRegistration:(id)a0;
+ (id)conditionsFromMKFConditions:(id)a0;

@end
